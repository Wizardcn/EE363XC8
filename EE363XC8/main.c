unsigned int ga, ub;

void assign_number(void), assign_char(void), and(void), or(void), use_and_inc(void), use_and_dec(void), shift_right(void), shift_left(void);


int main(void)
{
	while(1){
		assign_number();
		assign_char();
		and();
		or();
		use_and_inc();
		use_and_dec();
		shift_right();
		shift_left();
	}
}

void assign_number(void){
	ga = 0x54;
}

void assign_char(void){
	ub = 'K';
}

void and(void){
	ga &= 0xF0;
}

void or(void){
	ga |= 0b00001001;
}

void use_and_inc(void){
	ga++;
}

void use_and_dec(void){
	ub--;
}

void shift_right(void){
	ga >>= 1;
}

void shift_left(void){
	ub <<= 2;
}

