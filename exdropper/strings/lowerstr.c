
///////////////////////////////////////////////////////////////////////////
// Lowercase string ///////////////////////////////////////////////////////
void lowerstr(char *s,char *r)
{
	DWORD q;
	DWORD l=strlen(s);

	for (q=0;q<l;q++)
	{
		if ((s[q]>'A')&&(s[q]<'Z')) 
			r[q] = s[q]+32;
		 else
			r[q] = s[q];
	}
}

