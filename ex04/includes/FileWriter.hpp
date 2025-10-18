/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FileWriter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nluchini <nluchini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 18:18:23 by nluchini          #+#    #+#             */
/*   Updated: 2025/10/18 18:20:18 by nluchini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	 __FILEWRITER_H__
#define __FILEWRITER_H__

#include <string>

class FileWriter
{
private:
    std::string _filename;

public:
    FileWriter(const std::string& filename);
    ~FileWriter();

    bool write(const std::string& content);
};


#endif