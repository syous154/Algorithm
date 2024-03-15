#include <vector>
#include <queue>
#include <iostream>

using namespace std;

# define INF 99999999

// 시작 위치와 정점의 개수, 인접 행렬을 받아
// 최소 거리 행렬을 반환함
vector<int> dijkstra(int start, int v, vector<pair<int, int>> graph[]) {
    vector<int> dist(20010); //거리 배열 생성
    for (int i = 1; i <= v; i++) {
        dist[i] = INF;
    }
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq; // greater 함수 사용

    dist[start] = 0; // 시작 노드 거리를 0으로 함
    pq.push({ 0, start }); // 우선순위 큐에 넣기

    while (!pq.empty()) {
        int cur_dist = pq.top().first; // 큐에서 꺼내 방문하고 있는 정점의 거리
        int cur_node = pq.top().second; // 정점의 인덱스(번호)
        pq.pop(); 

        for (int i = 0; i < graph[cur_node].size(); i++)
        {
            int nxt_node = graph[cur_node][i].first;  // 인접 정점 번호
            int nxt_dist = cur_dist + graph[cur_node][i].second;  // 인접 정점까지 거리

            if (nxt_dist < dist[nxt_node])  // 지금 계산한 것이 기존 거리값보다 작다면
            {
                dist[nxt_node] = nxt_dist;  // 거리값 업데이트
                pq.push({ nxt_dist, nxt_node });  // 우선순위 큐에 넣기
            }
        }
    }

    return dist;
}
int main()
{
    int v, e;
    int k;
    cin >> v >> e;
    cin >> k;

    vector<pair<int, int>> graph[20010];  // 그래프 형태 선언

  /*  for (int i = 0; i < v; i++) {
        for (int j = 0; j < v; j++) {
            cout << graph[i][j] << ' ';
        }
        cout << '\n';
    }*/

    
    for (int i = 1; i <= e; i++) {
        int a, b, c;
        cin >> a >> b >> c;
        graph[a].push_back({ b,c });
    }

    vector<int> dist = dijkstra(k, v, graph);
    
    for (int i = 1; i <= v; i++) {
        if (dist[i] != INF)
            cout << dist[i] << '\n';
        else
            cout << "INF" << '\n';
    }
    return 0;
}