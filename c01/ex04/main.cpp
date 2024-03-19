/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpoungla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 16:29:09 by tpoungla          #+#    #+#             */
/*   Updated: 2024/03/17 16:29:09 by tpoungla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

void	replace_str(std::string &str, std::string s1, std::string s2)
{
	size_t	found_pos = 0;
	int		index = 0;

	if (s1.empty() || s2.empty())
		return ;
	while (true)
	{
		found_pos = str.find(s1, index);
		if (found_pos > str.size())
			break ;
		str.erase(found_pos, s1.length());
		str.insert(found_pos, s2);
		index = found_pos + s2.length();
	}
}

int main(int ac, char **argv)
{
    int len;
    int i;

    i = 0;
    if (ac != 4)
        return (0);
    std::ifstream file(argv[1]);
    if (file)
    {
        file.seekg(0, file.end);
        len = file.tellg();
        file.seekg (0, file.beg);
    }
    else
    {
        std::cout<<"Error opening file;";
        return (0);
    }
    char *buffer = new char[len];
    file.read(buffer,len);
    //std::cout<<buffer<<std::endl;
    file.close();

    std::string replace = ".replace";
    std::ofstream newfile(argv[1] + replace);

    std::string buff;
    buff = buffer;
    replace_str(buff, argv[2], argv[3]);

    newfile << buff;

    delete[] buffer;
    return (0);
}