import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        
        int arr[] = new int[n];

        for(int i=0;i<n;i++){
            arr[i]=sc.nextInt();
        }

        int target = sc.nextInt();
        int f=-1,l=-1;

        for(int i=0;i<n;i++){
            if(arr[i]==target){
                if(f==-1)
                    f=i;
                l=i;
            }
        }

        System.out.println(f+" "+l);

    }    
}
