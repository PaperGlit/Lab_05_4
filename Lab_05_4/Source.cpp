#include <iostream>

using namespace std;

double S0(const int N)
{
	double s = 0;
	for (int k = 1; k <= N; k++)
		s += (1 + sqrt(1 + k * k)) / (k * k);
	return s;
}

double S1(const int k, const int N)
{
	if (k > N)
		return 0;
	else
		return (1 + sqrt(1 + k * k)) / (k * k) + S1(k + 1, N);
}

double S2(const int k)
{
	if (k < 1)
		return 0;
	else 
		return (1 + sqrt(1 + k * k)) / (k * k) + S2(k - 1);
}

double S3(const int k, const int N, double i)
{
	i += (1 + sqrt(1 + k * k)) / (k * k);
	if (k >= N)
		return i;
	else
		return S3(k + 1, N, i);
}

double S4(const int k, double i)
{
	i += (1 + sqrt(1 + k * k)) / (k * k);
	if (k <= 1)
		return i;
	else
		return S4(k - 1, i);
}

int main()
{
	int N;
	cout << "N = "; cin >> N;
	cout << "(iter)        S0 = "<< S0(N) << endl;
	cout << "(rec up ++)   S1 = " << S1(1, N) << endl;
	cout << "(rec up --)   S2 = "<< S2(N) << endl;
	cout << "(rec down ++) S3 = " << S3(1, N, 0) << endl;
	cout << "(rec down --) S4 = " << S4(N, 0) << endl;

	return 0;
}