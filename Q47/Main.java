import java.util.Scanner;

public class Main{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int arr[] = new int[n];

        for(int i=0;i<n;i++){
            arr[i] = sc.nextInt();
        }

        for(int i=0;i<n-1;i++){
            for(int j=0;j<n-i-1;j++){
                if(arr[j]>arr[j+1]){
                    int temp = arr[j];
                    arr[j] = arr[j+1];
                    arr[j+1] = temp;
                }
            }
        }

        int current=1,longest=1;

        for(int i=1;i<n;i++){
            if(arr[i]==arr[i-1]+1)
                current++;
            else if(arr[i]!=arr[i-1])
                current=1;
            if(current>longest)
                longest = current;
        }
        System.out.println(longest);
    }
}