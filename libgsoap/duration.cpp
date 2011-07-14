/*
	duration.c

	Custom serializer for xsd:duration stored in a LONG64 with ms precision
	- the LONG64 int can represent 106751991167 days forward and backward
	- LONG64 is long long int under Unix/Linux
	- millisecond resolution (1/1000 sec) means 1 second = 1000
	- when adding to a time_t value, conversion may be needed since time_t
	  may (or may) not have seconds resolution
	- durations longer than a month are always output in days, rather than
	  months to avoid days-per-month conversion
	- durations expressed in years and months are not well defined, since
	  there is no reference starting time; the decoder assumes 30 days per
	  month and conversion of P4M gives 120 days and therefore the duration
	  P4M and P120D are assumed identical, while they may yield different
	  result depending on the reference starting time

	Compile this file and link it with your code.

gSOAP XML Web services tools
Copyright (C) 2000-2009, Robert van Engelen, Genivia Inc., All Rights Reserved.
This part of the software is released under ONE of the following licenses:
GPL, the gSOAP public license, OR Genivia's license for commercial use.
--------------------------------------------------------------------------------
gSOAP public license.

The contents of this file are subject to the gSOAP Public License Version 1.3
(the "License"); you may not use this file except in compliance with the
License. You may obtain a copy of the License at
http://www.cs.fsu.edu/~engelen/soaplicense.html
Software distributed under the License is distributed on an "AS IS" basis,
WITHOUT WARRANTY OF ANY KIND, either express or implied. See the License
for the specific language governing rights and limitations under the License.

The Initial Developer of the Original Code is Robert A. van Engelen.
Copyright (C) 2000-2009, Robert van Engelen, Genivia, Inc., All Rights Reserved.
--------------------------------------------------------------------------------
GPL license.

This program is free software; you can redistribute it and/or modify it under
the terms of the GNU General Public License as published by the Free Software
Foundation; either version 2 of the License, or (at your option) any later
version.

This program is distributed in the hope that it will be useful, but WITHOUT ANY
WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A
PARTICULAR PURPOSE. See the GNU General Public License for more details.

You should have received a copy of the GNU General Public License along with
this program; if not, write to the Free Software Foundation, Inc., 59 Temple
Place, Suite 330, Boston, MA 02111-1307 USA

Author contact information:
engelen@genivia.com / engelen@acm.org

This program is released under the GPL with the additional exemption that
compiling, linking, and/or using OpenSSL is allowed.
--------------------------------------------------------------------------------
A commercial use license is available from Genivia, Inc., contact@genivia.com
--------------------------------------------------------------------------------
*/

/* soapH.h generated by soapcpp2 from .h file containing #import "duration.h":*/
#include "OnvifH.h"

void soap_default_xsd__duration(struct soap *soap, LONG64 *a)
{ (void)soap; /* appease -Wall -Werror */
  a = 0;
}

const char *soap_xsd__duration2s(struct soap *soap, LONG64 a)
{ LONG64 d;
  int k, h, m, s, f;
  if (a < 0)
  { strcpy(soap->tmpbuf, "-P");
    k = 2;
    a = -a;
  }
  else
  { strcpy(soap->tmpbuf, "P");
    k = 1;
  }
  f = a % 1000;
  a /= 1000;
  s = a % 60;
  a /= 60;
  m = a % 60;
  a /= 60;
  h = a % 24;
  d = a / 24;
  if (d)
    sprintf(soap->tmpbuf + k, SOAP_LONG_FORMAT"D", d);
  if (h || m || s || f)
  { if (d)
      k = strlen(soap->tmpbuf);
    if (f)
      sprintf(soap->tmpbuf + k, "T%dH%dM%d.%03dS", h, m, s, f);
    else
      sprintf(soap->tmpbuf + k, "T%dH%dM%dS", h, m, s);
  }
  return soap->tmpbuf;
}

int soap_out_xsd__duration(struct soap *soap, const char *tag, int id, const LONG64 *a, const char *type)
{ if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_xsd__duration), type)
   || soap_string_out(soap, soap_xsd__duration2s(soap, *a), 0))
    return soap->error;
  return soap_element_end_out(soap, tag);
}

int soap_s2xsd__duration(struct soap *soap, const char *s, LONG64 *a)
{ LONG64 sign = 1, Y = 0, M = 0, D = 0, H = 0, N = 0, S = 0;
  float f = 0;
  *a = 0;
  if (s)
  { if (*s == '-')
    { sign = -1;
      s++;
    }
    if (*s++ != 'P')
      return soap->error = SOAP_TYPE;
    /* date part */
    while (s && *s)
    { LONG64 n;
      char k;
      if (*s == 'T')
      { s++;
	break;
      }
      if (sscanf(s, SOAP_LONG_FORMAT"%c", &n, &k) != 2)
	return soap->error = SOAP_TYPE;
      s = strchr(s, k);
      if (!s)
	return soap->error = SOAP_TYPE;
      switch (k)
      { case 'Y':
	  Y = n;
	  break;
	case 'M':
	  M = n;
	  break;
	case 'D':
	  D = n;
	  break;
	default:
	  return soap->error = SOAP_TYPE;
      }
      s++;
    }
    /* time part */
    while (s && *s)
    { LONG64 n;
      char k;
      if (sscanf(s, SOAP_LONG_FORMAT"%c", &n, &k) != 2)
	return soap->error = SOAP_TYPE;
      s = strchr(s, k);
      if (!s)
	return soap->error = SOAP_TYPE;
      switch (k)
      { case 'H':
	  H = n;
	  break;
	case 'M':
	  N = n;
	  break;
	case '.':
	  S = n;
	  if (sscanf(s, "%f", &f) != 1)
	    return soap->error = SOAP_TYPE;
	  s = NULL;
	  continue;
	case 'S':
	  S = n;
	  break;
	default:
	  return soap->error = SOAP_TYPE;
      }
      s++;
    }
    /* convert Y-M-D H:N:S.f to signed long long int */
    *a = sign * ((((((((((((Y * 12) + M) * 30) + D) * 24) + H) * 60) + N) * 60) + S) * 1000) + (long)(1000 * f));
  }
  return soap->error;
}

LONG64 *soap_in_xsd__duration(struct soap *soap, const char *tag, LONG64 *a, const char *type)
{ if (soap_element_begin_in(soap, tag, 0, NULL))
    return NULL;
  if (*soap->type
   && soap_match_tag(soap, soap->type, type)
   && soap_match_tag(soap, soap->type, ":duration"))
  { soap->error = SOAP_TYPE;
    soap_revert(soap);
    return NULL;
  }
  a = (LONG64*)soap_id_enter(soap, soap->id, a, SOAP_TYPE_xsd__duration, sizeof(LONG64), 0, NULL, NULL, NULL);
  if (*soap->href)
    a = (LONG64*)soap_id_forward(soap, soap->href, a, 0, SOAP_TYPE_xsd__duration, 0, sizeof(LONG64), 0, NULL);
  else if (a)
  { if (soap_s2xsd__duration(soap, soap_value(soap), a))
      return NULL;
  }
  if (soap->body && soap_element_end_in(soap, tag))
    return NULL;
  return a;
}
