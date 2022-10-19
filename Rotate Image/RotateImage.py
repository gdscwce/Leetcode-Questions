#Rotate image of matrix code by Deepak Khatri

class Solt:
    def rotate(self, mtx: List[List[int]]) -> None:
        n = len(mtx[0])
        for i in range(n // 2 + n % 2):
            for j in range(n // 2):
                tmp = mtx[n - 1 - j][i]
                mtx[n - 1 - j][i] = mtx[n - 1 - i][n - j - 1]
                mtx[n - 1 - i][n - j - 1] = mtx[j][n - 1 -i]
                mtx[j][n - 1 - i] = mtx[i][j]
                mtx[i][j] = temp
