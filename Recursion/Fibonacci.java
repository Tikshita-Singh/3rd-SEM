public class Fibonacci{

	public static void main(String[] args) {
		int n = 4;
		int ans = fibo(n);
		System.out.println(ans);
	}

	static int fibo(int n) {
		//base case
		if(n<2) {
			return n;
		}
		return fibo(n-1) + fibo(n-2);
	}
}
