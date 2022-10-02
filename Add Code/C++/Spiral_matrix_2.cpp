class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {

        vector<vector<int>> generate(n,vector<int>(n,0));

        int lastcol=n,firstrow=0;
        int lastrow=n,firstcol=0;
        int count=1;

        while(firstrow<lastrow && firstcol<lastcol)
        {
            for(int x=firstcol;x<lastcol;x++)
            {
                generate[firstrow][x]=count;
                count++;
            }
            firstrow++;

            for(int x=firstrow;x<lastrow;x++)
            {
                generate[x][lastcol-1]=count;
                count++;
            }
            lastcol--;

            if(firstrow<lastrow)
            {
                for(int x=lastcol-1;x>=firstcol;x--)
                {
                    generate[lastrow-1][x]=count;
                    count++;
                }
                lastrow--;
            }

            if(firstcol<lastcol)
            {
                for(int x=lastrow-1;x>=firstrow;x--)
                {
                    generate[x][firstcol]=count;
                    count++;
                }
                firstcol++;
            }
        }
        return generate;
    }
};










//     vector<vector<int>> vec( n , vector<int> (n, 0));
//         int last_col = n;
//         int last_row = n;
//         int first_row = 0;
//         int first_col = 0;
//         int i;
//         int x = 1;
//         while(first_row < last_row && first_col < last_col){

//             for(i = first_col ; i < last_col ; i++ ){
//                 vec[first_row][i] = x;
//                 x++;
//             }
//             first_row++;

//             for( i = first_row ; i < last_row ; i++){
//                 vec[i][last_col -1] = x;
//                 x++;
//             }
//             last_col--;

//             if(first_row < last_row){
//                 for ( i = last_col - 1 ; i >= first_col ; i--){
//                     vec[last_row - 1][i] = x;
//                     x++;
//                 }
//                 last_row--;
//             }

//             if(first_col < last_col){
//                 for ( i = last_row - 1 ; i >= first_row ; i--){
//                     vec[i][first_col] = x;
//                     x++;
//                 }
//                 first_col++;
//             }
//         }
//         return vec;