touch quest2.sh
mv door_management_fi door_management_files
mkdir door_map
mkdir door_logs
mkdir door_configuration
mv *.logs door_logs
mv door_map_1.1 door_map
mv *.conf door_configuration
git add .
git commit .
git push origin develop
