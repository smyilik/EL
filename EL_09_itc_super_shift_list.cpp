#include "easy_list.h"

void itc_super_shift_list(vector <int>& mass, int n)
{
	if (mass.size() <= 1) return;
	if (n < 0) n = mass.size() - ((n * -1) % mass.size());
	n %= mass.size();
	if (n == 0) return;
	for (int i = 0; i < n; i++) itc_rshift_list(mass);
}
