#ifndef __BinaryComponentExtractor_H_
#define __BinaryComponentExtractor_H_

#include "ComponentExtractor.h"
#include "manuscript_global.h"

////////////////////////////////////////////////////////////////////////////////////////////////////
/// <summary>	Binary component extractor class </summary>
///
/// <remarks>	El Sana, 2/15/2012. </remarks>
////////////////////////////////////////////////////////////////////////////////////////////////////

class MANUSCRIPT_EXPORT BinaryComponentExtractor : public ComponentExtractor {

public:
	BinaryComponentExtractor(void)  {;}
	~BinaryComponentExtractor(void) {;}

	void collectComponents(vector<vector<Point>>& contours, vector<Vec4i> hierarchy, vector<ConnectedComponent*>& component);
	void extract(vector<ConnectedComponent*>&) ;
};

#endif 
