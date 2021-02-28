#include<stdio.h>
#include<limits.h>
#include<float.h>
void main()
{
	printf("sizeof(char)=%u\n",sizeof(char));
	printf("sizeof(short)=%u\n",sizeof(short));
	printf("sizeof(int)=%u\n",sizeof(int));
	printf("sizeof(long)=%u\n",sizeof(long));
	printf("sizeof(float)=%u\n",sizeof(float));
	printf("sizeof(double)=%u\n",sizeof(double));
	printf("sizeof(long double)=%u\n",sizeof(long double));
	
	printf("SCHAR_MIN=%d\n",SCHAR_MIN);
	printf("SCHAR_MAX=%d\n",SCHAR_MAX);
	printf("UCHAR_MAX=%d\n",UCHAR_MAX);
	printf("SHRT_MIN=%d\n",SHRT_MIN);
	printf("SHRT_MAX=%d\n",SHRT_MAX);
	printf("USHRT_MAX=%d\n",USHRT_MAX);
	printf("INT_MIN=%d\n",INT_MIN);
	printf("INT_MAX=%d\n",INT_MAX);
	printf("UINT_MAX=%d\n",UINT_MAX);
	printf("LONG_MIN=%d\n",LONG_MIN);
	printf("LONG_MAX=%d\n",LONG_MAX);
	printf("ULONG_MAX=%d\n",ULONG_MAX);
	printf("FLT_MIN=%d\n",FLT_MIN);
	printf("FLT_MAX=%d\n",FLT_MAX);
	printf("DBL_MIN=%d\n",DBL_MIN);
	printf("DBL_MAX=%d\n",DBL_MAX);
	printf("LDBL_MIN=%d\n",LDBL_MIN);
	printf("LDBL_MAX=%d\n",LDBL_MAX);
	
	/*THIS CODE WILL SHOW PRECISION*/
	printf("FLT_DIG=%d\n",FLT_DIG);
	printf("DBL_DIG=%d\n",DBL_DIG);
	printf("LDBL_DIG=%d\n",LDBL_DIG);
}
