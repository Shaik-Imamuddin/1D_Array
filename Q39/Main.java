import java.util.Scanner;

public class Main{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int arr[] = new int[n];
        for(int i=0;i<n;i++){
            arr[i] =sc.nextInt();
        }
        int target = sc.nextInt();

        int start=0,currsum=0,maxlen=0;

        for(int end=0;end<n;end++){
            currsum+=arr[end];

            while(currsum>target && start<=end){
                currsum -=arr[start];
                start++;
            }

            if(currsum==target){
                int len = end-start+1;
                if(len>maxlen)
                    maxlen=len;
            }
        }
        System.out.println(maxlen);
        return;
    }
}
