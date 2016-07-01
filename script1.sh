#!/bin/bash
echo "Digite um site"
read url
echo "-> OK, o download sera inicado...."
wget -r -A jpg,jpeg,png $url
