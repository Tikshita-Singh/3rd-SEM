package com.tikshita;

public class BinarySearch {

	public static void main(String[] args)
	{
		int[] arr= {2,3,7,8,13,15,34,65,96,97};
	    int n=arr.length;
    	int target =  65;
		int ans =binSearch(arr,0,n-1,target);
		if(ans == -1)
		{
			System.out.println("Element not found");
		}
		else {
			System.out.println("Element found");
		}
	}
	static int binSearch(int[] arr,int l,int u,int target) 
	{
		while(l<=u)
		{
			int m=(l+u)/2;
			if(target==arr[m])
				return m;
			if(target>arr[m])
				l=m+1;
			else
			  u=m-1;
		}
		return -1;
	}

}
