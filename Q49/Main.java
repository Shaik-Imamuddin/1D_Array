import java.util.Scanner;

public class Main{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        
        int n = sc.nextInt();
        int arr[] = new int[n];

        for(int i=0;i<n;i++){
            arr[i] = sc.nextInt();
        }

        int max = arr[0];

        for(int i=0;i<n;i++){
            if(arr[i]>max)
                max=arr[i];
        }

        if(max<=0){
            System.out.print("1");
            return;
        }

        int visited[] = new int[max+1];

        for(int i=0;i<=max;i++){
            visited[i]=0;
        }

        for(int i=0;i<n;i++){
            if(arr[i]>0 && arr[i]<=max)
                visited[arr[i]]=1;
        }

        for(int i=max;i>=1;i--){
            if(visited[i]==0){
                System.out.print(i);
                return;
            }
        }
        System.out.print(max+1);
    }    
}