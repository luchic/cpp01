/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FileReader.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nluchini <nluchini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 18:17:22 by nluchini          #+#    #+#             */
/*   Updated: 2025/10/18 18:20:15 by nluchini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	 __FILEREADER_H__
#define __FILEREADER_H__

#include <string>

class FileReader
{
private:
    std::string _filename;
    std::string _content;

public:
    FileReader(const std::string& filename);
    ~FileReader();

    bool read();
    const std::string& getContent() const;
};


#endif