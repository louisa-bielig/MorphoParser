/*
 * GenreYearQuery.h
 *
 *  Created on: Jul 15, 2010
 *      Author: gina
 */

#ifndef GENREYEARQUERY_H_
#define GENREYEARQUERY_H_

#include "Query.h"

class GenreYearQuery: public Query {
private:
	std::string genreUserQuery;
	int yearUserQuery;

public:
	void query();
	GenreYearQuery();
	virtual ~GenreYearQuery();
};

#endif /* GENREYEARQUERY_H_ */
