import java.util.Scanner;

public class Main{
    public static void main(String[] args) {
        Scanner sc  = new Scanner(System.in);

        int n = sc.nextInt();
        int arr[] = new int[n];

        for(int i=0;i<n;i++){
            arr[i]=sc.nextInt();
        }

        int visited[] = new int[n+1];

        for(int i=0;i<=n;i++){
            visited[i]=0;
        }

        for(int i=0;i<n;i++){
            if(arr[i]>=1 && arr[i]<=n){
                visited[arr[i]]=1;
            }
        }

        for(int i=1;i<n;i++){
            if(visited[i]==0){
                System.out.print(i);
                return;
            }
        }
        System.out.print(n+1);
        return;
    }
}