#include <vector>
#include <queue>
#include <iostream>

using namespace std;

# define INF 99999999

// 시작 위치와 정점의 개수, 인접 행렬을 받아
// 최소 거리 행렬을 반환함
vector<int> cnt(1001);
vector<pair<int, int>> graph[1001];  // 그래프 형태 선언
vector<int> dist(1001); //거리 배열 생성

vector<int> dijkstra(int start, int v, vector<pair<int, int>> graph[]) {

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

        if (dist[cur_node] < cur_dist) continue;

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
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, m;
    cin >> n >> m;

    for (int i = 1; i <= m; i++) {
        int a, b, c;
        cin >> a >> b >> c;
        graph[a].push_back({ b,c });
        //graph[b].push_back({ a,c });
    }

    int start, end;
    cin >> start >> end;

    vector<int> dist = dijkstra(start, n, graph);

    cout << dist[end] << '\n';

    //cnt[end] -> end 가기 전의 노드

    return 0;
}