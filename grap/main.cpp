#include "CMap.h"

int main(void)
{
	CMap *pMap = new CMap(6);

	Node *pNodeA = new Node('A');
	Node *pNodeB = new Node('B');
	Node *pNodeC = new Node('C');
	Node *pNodeD = new Node('D');
	Node *pNodeE = new Node('E');
	Node *pNodeF = new Node('F');
	Node *pNodeG = new Node('G');
	//Node *pNodeH = new Node('H');

	pMap->addNode(pNodeA);
	pMap->addNode(pNodeB);
	pMap->addNode(pNodeC);
	pMap->addNode(pNodeD);
	pMap->addNode(pNodeE);
	pMap->addNode(pNodeF);
	//pMap->addNode(pNodeG);
	//pMap->addNode(pNodeH);

	pMap->setValueToMatrixForUndirectedGraph(0, 1, 6);
	pMap->setValueToMatrixForUndirectedGraph(0, 4, 5);
	pMap->setValueToMatrixForUndirectedGraph(0, 5, 1);
	pMap->setValueToMatrixForUndirectedGraph(1, 2, 3);
	pMap->setValueToMatrixForUndirectedGraph(1, 5, 2);
	pMap->setValueToMatrixForUndirectedGraph(2, 5, 8);
	pMap->setValueToMatrixForUndirectedGraph(2, 3, 7);
	pMap->setValueToMatrixForUndirectedGraph(3, 5, 4);
	pMap->setValueToMatrixForUndirectedGraph(3, 4, 2);
	pMap->setValueToMatrixForUndirectedGraph(4, 5, 9);

	/*pMap->printMatrix();
	cout << endl;*/

	/*pMap->resetNode();
	pMap->depthFirstTraverse(0);
	cout << endl;
	
	pMap->resetNode();
	pMap->breadthFirstTraverse(0);
	cout << endl;*/

	//pMap->primTree(0);
	//pMap->kruskalTree();

	//pMap->new_kruskalTree();
	//pMap->second_kruskalTree();

	CMap *pMap2 = new CMap(7);
	pMap2->addNode(pNodeA);
	pMap2->addNode(pNodeB);
	pMap2->addNode(pNodeC);
	pMap2->addNode(pNodeD);
	pMap2->addNode(pNodeE);
	pMap2->addNode(pNodeF);
	pMap2->addNode(pNodeG);

	pMap2->setValueToMatrixForUndirectedGraph(0, 1, 6);
	pMap2->setValueToMatrixForUndirectedGraph(0, 2, 5);
	pMap2->setValueToMatrixForUndirectedGraph(1, 2, 9);
	pMap2->setValueToMatrixForUndirectedGraph(1, 4, 13);
	pMap2->setValueToMatrixForUndirectedGraph(2, 3, 16);
	pMap2->setValueToMatrixForUndirectedGraph(2, 5, 12);
	pMap2->setValueToMatrixForUndirectedGraph(3, 4, 15);
	pMap2->setValueToMatrixForUndirectedGraph(3, 5, 7);
	pMap2->setValueToMatrixForUndirectedGraph(4, 6, 8);
	pMap2->setValueToMatrixForUndirectedGraph(5, 6, 3);

	pMap2->second_kruskalTree();

	system("pause");
	return 0;
}