import java.util.Scanner;

public class Main{
    public static void main(String[] args) {
        Scanner sc  = new Scanner(System.in);
        int n=sc.nextInt();
        int arr[] = new int[n];

        for(int i=0;i<n;i++){
            arr[i] = sc.nextInt();
        }

        int cursum=arr[0];
        int maxsum=cursum;

        for(int i=1;i<n;i++){
            if(cursum+arr[i]>arr[i])
                cursum+=arr[i];
            else    
                cursum=arr[i];

            if(cursum>maxsum)
                maxsum=cursum;
            }
        System.out.println(maxsum);
    }
}