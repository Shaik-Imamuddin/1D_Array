import java.util.Scanner;

public class Main{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        
        int n = sc.nextInt();
        int arr[] = new int[n];
        for(int i=0;i<n;i++){
            arr[i]=sc.nextInt();
        }

        int target = sc.nextInt();
        int start=0,end,currsum=0;

        for(end=0;end<n;end++){
            currsum+=arr[end];

            while(currsum>target && start<=end){
                currsum-=arr[start];
                start+=1;
            }
            if(currsum==target)
                break;
        }
        for(int i=start;i<=end;i++){
            System.out.print(arr[i]+" ");
        }
    }
}