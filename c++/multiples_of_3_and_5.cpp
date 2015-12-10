// If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.
// Find the sum of all the multiples of 3 or 5 below N.
#include <iostream>
using namespace std;

long multiples_sum(long);
long iterations(long, long);

int main() {
    int test_cases;
    cin >> test_cases;
    for(int i = 0; i<test_cases; i++) {
        long user_num;
        cin >> user_num;
        long three = iterations(3, user_num);
        long five = iterations(5, user_num);
        long fifteen = iterations(15, user_num);

    		long int_sum_three = 3*multiples_sum(three);
        long int_sum_five = 5*multiples_sum(five);
        long int_sum_fifteen = 15*multiples_sum(fifteen);

        cout << int_sum_three + int_sum_five - int_sum_fifteen << endl;
    }



	return 0;
}

long iterations(long n, long user_num) {
	int iter = (user_num - 1) / n;
	return iter;
}

long multiples_sum(long n) {
	return (n*(n + 1)) / 2;
}
