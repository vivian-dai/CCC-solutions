package CCC_2020.S2;//remove package lol
import java.io.*;
import java.util.*;
public class Main {
    public static void main(String[] args) throws IOException{
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int n = Integer.parseInt(br.readLine());
        int m = Integer.parseInt(br.readLine());
        HashMap<Integer, ArrayList<int[]>> factorMap = new HashMap<>();
        int[][] maze = new int[n][m];
        boolean[][] visited = new boolean[n][m];
        for(int i = 0;i < n;i++){
            String[] s = br.readLine().split(" ");
            for(int j = 0;j < m;j++){
                maze[i][j] = Integer.parseInt(s[j]);
                if(factorMap.containsKey(maze[i][j])){
                    factorMap.get(maze[i][j]).add(new int[]{i, j});
                }else{
                    ArrayList<int[]> arrList = new ArrayList<>();
                    arrList.add(new int[]{i, j});
                    factorMap.put(maze[i][j], arrList);
                }
            }
        }
        Queue<int[]> queue = new LinkedList<int[]>();
        queue.add(new int[]{n - 1, m - 1});
        visited[n - 1][m - 1] = true;
        while(!queue.isEmpty()){
            int[] coords = queue.poll();
            if((coords[0] == 0) && (coords[1] == 0)){
                System.out.println("yes");
                System.exit(0);
            }else{
                int target = (coords[0] + 1)*(coords[1] + 1);
                if(factorMap.containsKey(target)){
                    ArrayList<int[]> arrayList = factorMap.get(target);
                    for(int i = 0;i < arrayList.size();i++){
                        queue.add(arrayList.get(i));
                    }
                    factorMap.remove(target);
                }
            }
        }
        System.out.println("no");
    }
}
