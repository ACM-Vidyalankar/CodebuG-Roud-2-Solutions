import java.io.*;
import java.util.*;

class Prepost {
	
	public void prepost(int pre[])
	{
		int pivotPoint = 0;

		for (int i = 1; i < pre.length; i++)
		{	
			// changed '>=' to '<='
			if (pre[0] <= pre[i])
			{
				pivotPoint = i;
				break;
			}
		}

		// changed 'pivotPoint' to 'pivotPoint-1'
		for (int i = pivotPoint - 1; i > 0; i--)
		{
			System.out.print(pre[i] + " ");
		}
	

		for (int i = pre.length - 1; i >= pivotPoint; i--)
		{
			System.out.print(pre[i] + " ");
		}
		// changed 'pre[i]' to 'pre[0]'
		System.out.print(pre[0]);
	}


	public static void main(String[] args)
	{
		Scanner in = new Scanner(System.in);
        int N = in.nextInt();
        int pre[] = new int[N];
        for(int a_i=0; a_i < N; a_i++){
            pre[a_i] = in.nextInt();
        }
		Prepost obj = new Prepost();
        obj.prepost(pre);
	}
}