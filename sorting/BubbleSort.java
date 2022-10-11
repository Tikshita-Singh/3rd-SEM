package sorting;

public class BubbleSort {

	public static void main(String[] args) {
		int arr[]= {23,3,58,44,25,1,46};
		System.out.println("Intially array is");
		for(int i = 0;i<arr.length;i++) {
			System.out.print(" "+arr[i]); 
		}
			System.out.println();
			bubble_sort(arr);
			System.out.println("Finally array sorted is");
			for(int i=0;i<arr.length;i++)
			{
				System.out.print(" "+arr[i]);
			}
				System.out.println();
	}
	
	public static void bubble_sort(int arr[])
	{
		for(int i=0;i<arr.length;i++)
		{
			for(int j=0;j<arr.length-1-i;j++)
			{
				if(arr[j]>arr[j+1])
				{
					int temp=arr[j];
					arr[j]=arr[j+1];
					arr[j+1]=temp;
				}
			}
		}
	}
}

