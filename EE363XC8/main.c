unsigned char ufunc(unsigned char a);

int main(void)
{
	ufunc(0);
	ufunc(1);
	ufunc(4);
	ufunc(16);
	ufunc(32);
	ufunc(40);
	ufunc(48);
	ufunc(56);
}

unsigned char ufunc(unsigned char a)
{
	unsigned char r = 0;
	while (a)
	{
		r += 8;
		a--;
	}
	return r;
}