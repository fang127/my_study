#include "QueryResult.h"
#include "StrBlob.h"
#include "ConstStrBlobPtr.h"

void QueryResult::print(std::ostream &out) const
{
    if (this->line->empty())
    {
        out << "Word: " << this->word << " not found." << std::endl;
    }
    else
    {
        out << "element occurs " << this->line->size() << " times." << "\n";

        out << "Word: " << this->word << " found in lines: " << "\n";
        // Print the line numbers where the text is found
        // for (const auto &line_num : *this->line)
        // {
        //     out << "\t(" << "line " << line_num + 1 << ")" << " " << this->text->at(line_num) << "\n";
        // }

        for (const auto &line_num : *this->line)
        {
            out << "\t(" << "line " << line_num + 1 << ")" << " " << this->str_blob[line_num] << "\n";
        }

        out << std::endl;
    }
}