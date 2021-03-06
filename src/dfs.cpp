// dfs.cpp: (c) David R. Morrison, July 2014
// Implementation details for the depth-first search strategy

#include "dfs.h"
#include "subproblem.h"

using namespace std;

namespace BnB
{

void DFS::push(SubPtr&& s) { mSubproblems.push_back(move(s)); }

SubPtr DFS::pop() 
{ 
	SubPtr s = move(mSubproblems.back()); 
	mSubproblems.pop_back(); 
	return s; 
}

bool DFS::empty() const { return mSubproblems.empty(); }

size_t DFS::size() const { return mSubproblems.size(); }

};

