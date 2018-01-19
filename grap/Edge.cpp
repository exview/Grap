#include "Edge.h"

Edge::Edge(int nodeIndexA, int nodeIndexB, int weightValue)
{
	m_iNodeIndexA = nodeIndexA;
	m_iNodeIndexB = nodeIndexB;
	m_iWeightValue = weightValue;
	m_bSelected = false;
}

Edge::~Edge()
{
}

bool Edge::operator==(const Edge & edge) const
{
	if (m_iNodeIndexA == edge.m_iNodeIndexA && m_iNodeIndexB == edge.m_iNodeIndexB && edge.m_iWeightValue == edge.m_iWeightValue)
		return true;
	else
		return false;
}
