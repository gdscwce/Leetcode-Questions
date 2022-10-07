/*
// Definition for a Node.
class Node {
    public int val;
    public List<Node> neighbors;
    public Node() {
        val = 0;
        neighbors = new ArrayList<Node>();
    }
    public Node(int _val) {
        val = _val;
        neighbors = new ArrayList<Node>();
    }
    public Node(int _val, ArrayList<Node> _neighbors) {
        val = _val;
        neighbors = _neighbors;
    }
}
*/

class Solution {
    public Node cloneGraph(Node node) {
        if(node==null )return null;
        
        Node curr = new Node(node.val);
        HashMap<Integer, Node> map = new HashMap();
        map.put(node.val, curr);
        
        Queue<Node> queue = new LinkedList();
        queue.add(node);
        while(!queue.isEmpty()){
            Node n = queue.poll();
            for(Node neighbour: n.neighbors){
                if(!map.containsKey(neighbour.val)){
                    map.put(neighbour.val, new Node(neighbour.val));
                    queue.add(neighbour);
                }
                map.get(n.val).neighbors.add(map.get(neighbour.val));
            }
        }
        return curr;
    }
}