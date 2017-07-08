/*! \mainpage Control Code base for Waterloop
 *
 * \section connection_sec Connection Overview
 *
 * The pod communicates with Pi using Serial Cable. Hence, commands and sensor reading data is
 * transferred through Serial. Every Sensor writes to Serial so that Pi can use that data. In
 * order to gather data from Pi Arduino receives Commands through Serial.
 *
 * To get the list of commands and full overview of Connections, check github repo.
 * https://github.com/teamwaterloop/control
 *
 * \section project_sec Project Structure
 *
 * This code base manages the code from all repositories and will make the code work as whole.
 * Sensor reading and subsystems will be used to make decisions. Commands are used to toggle various
 * states in the program. Check the documentation of each class to get a better idea of what is
 * happening.
 */