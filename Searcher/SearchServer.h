#pragma once
#include <iostream>

class SearchServer {
public:
	SearchServer() = default;
	explicit SearchServer(istream& document_input);

	void UpdateDocumentBase(istream& document_input);
	void AddQueriesStream(istream& query_input, ostream& search_results_output);
};