package sorting;

public class InsertionSort {

	public static void main(String[] args) {
		int arr[]= {50,30,20,40,10};
		System.out.println("Intially array is");
		for(int i = 0;i < arr.length;i++)
		{
			System.out.print(" "+arr[i]);
		}
		System.out.println();
		insertion_sort(arr);
		System.out.println("Finally array sorted is");
		for(int i = 0;i < arr.length;i++)
		{
			System.out.print(" "+arr[i]);
		}
		System.out.println();

	}
	public static void insertion_sort(int arr[])
	{
		for(int i = 1;i < arr.length;i++)
		{
			int current = arr[i];
			int j = i - 1;
			while(j >= 0 && current < arr[j]) {
				arr[j+1] = arr[j];
				j--;
			}
			arr[j+1] = current;
		}
	}
}
