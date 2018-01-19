#pragma once
#ifndef CMAP_H
#define CMAP_H

#include <iostream>
#include <vector>
using namespace std;
#include "Node.h"
#include "Edge.h"

class CMap
{
public:
	CMap(int capacity);
	~CMap();
	bool addNode(Node *pNode);		//向图中加入顶点（结点）
	void resetNode();				//重置顶点
	bool setValueToMatrixForDirectedGraph(int row, int col, int val = 1);		//为有向图设置邻接矩阵
	bool setValueToMatrixForUndirectedGraph(int row, int col, int val = 1);		//为无向图设置邻接矩阵

	void printMatrix();		//打印邻接矩阵

	void depthFirstTraverse(int nodeIndex);		//深度优先遍历
	void breadthFirstTraverse(int nodeIndex);	//广度优先遍历

	void primTree(int nodeIndex);		//普里姆生成树
	void kruskalTree();					//克鲁斯卡尔算法
	void new_kruskalTree();				//克鲁斯卡尔算法的另外一种实现方法
	void second_kruskalTree();			//克鲁斯卡尔算法的反向实现（添加最大的边，再从形成环的边集合中去掉最大的边）

private:
	bool getValueFromMatrix(int row, int col, int &val);	//从矩阵中获取权值
	void breadthFirstTraverseImpl(vector<int> preVec);		//广度优先遍历实现函数
	int getMinEdge(vector<Edge> edgeVec);					//获取最小边
	int getMaxEdge(vector<Edge> edgeVec);					//获取最大边
	bool isInSet(vector<int> nodeSet, int target);			//判断顶点是否在点集合中
	void mergeNodeSet(vector<int> &nodeSetA, vector<int> nodeSetB);	//合并两个顶点集合
	void isCyCle(int head, int nodeIndexB,vector<Edge> &treeEdge,int &edgeCount);		//检测是否有环
	void isCycle(int head, int nodeIndexB, vector<Edge> &treeEdge, int &edgeCount, vector<Edge> &temp);//检测是否有环
	void isCycle(int head, int nodeIndexB, vector<Edge> &treeEdge, int &edgeCount, vector<int> &temp, bool & over);

private:
	int m_iCapacity;		//图中最多可以容纳的顶点数
	int m_iNodeCount;		//已经添加的顶点（结点）个数
	Node *m_pNodeArray;		//用来存放顶点数组
	int *m_pMatrix;			//用来存放邻接矩阵

	Edge *m_pEdge;
};

#endif // !CMAP_H