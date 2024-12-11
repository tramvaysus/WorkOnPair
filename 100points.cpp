#include <iostream>
#include <vector>
#include <cmath>
#include <limits>
#include <algorithm>
#include <queue>

struct Point
{
	double x, y;
};

struct Edge
{
	int to; 
	double cost;
};

using Graph = std::vector<std::vector<Edge>>;

double distance(const Point& a, const Point& b)
{
	return std::sqrt((a.x - b.x) * (a.x - b.x) + (a.y - b.y) * (a.y - b.y));
}

Graph createGraph(const std::vector<Point>& points)
{
	size_t n = points.size();
	Graph graph(n);
	for (size_t i = 0; i < n; i++)
	{
		std::vector<std::pair<double, int>>distances;
		for (size_t j = 0; j < n; j++)
		{
			if (i != j)
			{
				distances.emplace_back(distance(points[i], points[j]), j);
			}
		}
		std::sort(distances.begin(), distances.end());

		int connections = std::min(6, static_cast<int>(distances.size()));
		for (int k = 0; k < connections; k++)
		{
			graph[i].push_back({ distances[k].second, distances[k].first });
		}
	}
	
}



int main()
{
	
}
