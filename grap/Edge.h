#pragma once
#ifndef EDGE_H
#define EDGE_H

class Edge
{
public:
	Edge(int nodeIndexA = 0, int nodeIndexB = 0, int weightValue = 0);
	~Edge();
	bool operator==(const Edge &edge) const;
	
public:
	int m_iNodeIndexA;
	int m_iNodeIndexB;
	int m_iWeightValue;
	bool m_bSelected;
	bool m_bCuted;
};

#endif // !EDGE_H