class Solution {
    public static void main(String[] args) {
        Solution sol = new Solution();
        int plants[] = {2,2,3,3};
        int capacity = 5;
        System.out.println(sol.wateringPlants(plants, capacity));
    }

    public int wateringPlants(int[] plants, int capacity) {
        int steps = 0;
        int walk_back = 0;
        int n = plants.length;
        int ncap = capacity;
        for (int i = 0; i < n; i++) {
            System.out.println("1 Step walked for plant " + i);
            steps += 1;
            ncap -= plants[i];
            if (i != (n - 1) && ncap < plants[i + 1]) {
                int s = (i + 1);
                walk_back += 2 * s;
                System.out.println(walk_back+" Step walked to river for plant " + i+1);
                ncap = capacity;
            }
        }
        steps += walk_back;
        return steps;
    }
}