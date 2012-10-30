/* The contents of this file was automatically generated by mlp_train.c
   It contains multi-layer perceptron (MLP) weights. */

#include "mlp.h"

/* RMS error was 0.179835, seed was 1322103961 */

static const float weights[271] = {

/* hidden layer */
1.55597, -0.0739792, -0.0646761, -0.099531, -0.0794943, 
0.0180174, -0.0391354, 0.0508224, -0.0160169, -0.0773263, 
-0.0300002, -0.0865361, 0.124477, -0.28648, -0.0860702, 
-0.518949, -0.0873341, -0.235393, -0.907833, -0.383573, 
0.535388, -0.57944, 0.98116, 0.8482, 1.12426, 
-3.23721, -0.647072, -0.0265139, 0.0711052, -0.00125666, 
-0.0396181, -0.44282, -0.510495, -0.201865, 0.0134336, 
-0.167205, -0.155406, 0.00041678, -0.00468705, -0.0233224, 
0.264279, -0.301375, 0.00234895, 0.0144741, -0.137535, 
0.200323, 0.0192027, 3.19818, 2.03495, 0.705517, 
-4.6025, -0.11485, -0.792716, 0.150714, 0.10608, 
0.240633, 0.0690698, 0.0695297, 0.124819, 0.0501433, 
0.0460952, 0.147639, 0.10327, 0.158007, 0.113714, 
0.0276191, 0.0680749, -0.130012, 0.0796126, 0.133067, 
0.51495, 0.747578, -0.128742, 5.98112, -1.16698, 
-0.276492, -1.73549, -3.90234, 2.01489, -0.040118, 
-0.113002, -0.146751, -0.113569, 0.0534873, 0.0989832, 
0.0872875, 0.049266, 0.0367557, -0.00889148, -0.0648461, 
-0.00190352, 0.0143773, 0.0259364, -0.0592133, -0.0672924, 
0.1399, -0.0987886, -0.347402, 0.101326, -0.0680876, 
0.469186, 0.246922, 10.4017, 3.44846, -0.662725, 
-0.0328208, -0.0561274, -0.0167744, 0.00044282, -0.0457645, 
-0.0408314, -0.013113, -0.0373873, -0.0474122, -0.0273745, 
-0.0308505, 0.000582959, -0.0421135, 0.464859, 0.196842, 
0.320538, 0.0435528, -0.200168, 0.266475, -0.0853727, 
1.20397, 0.711542, -1.04397, -1.47759, 1.26768, 
0.446958, 0.266477, -0.30802, 0.28431, -0.118541, 
0.00836345, 0.0689026, -0.0137996, -0.0395417, 0.26982, 
-0.206255, 0.16066, 0.114757, 0.359587, -0.106503, 
-0.0948534, 0.175358, -0.122966, -0.0056675, 0.483848, 
-0.134916, -0.427567, -0.140172, -1.0866, -2.73921, 
0.549843, 0.17685, 0.0010675, -0.00137386, 0.0884424, 
-0.0698736, -0.00174136, 0.0718775, -0.0396849, 0.0448056, 
0.0577853, -0.0372353, 0.134599, 0.0260656, 0.140322, 
0.22704, -0.020568, -0.0142424, -0.21723, -0.997704, 
-0.884573, -0.163495, 2.33617, 0.224142, 0.19635, 
-0.957387, 0.144678, 1.47035, -0.00700498, -0.0472309, 
-0.0137848, -0.0189145, 0.00856479, 0.0316965, 0.00613373, 
0.00209807, 0.00270964, -0.0490206, 0.0105712, -0.0465045, 
-0.0381532, -0.0985268, -0.108297, 0.0146409, -0.0040718, 
-0.0698572, -0.380568, -0.230479, 3.98917, 0.457652, 
-1.02355, -7.4435, -0.475314, 1.61743, 0.0254017, 
-0.00791293, 0.047217, 0.0220995, -0.0304311, 0.0052168, 
-0.0404054, -0.0230293, 0.00169229, -0.0138178, 0.0043137, 
-0.0598088, -0.133601, 0.0555138, -0.177358, -0.159856, 
-0.137281, 0.108051, -0.305973, 0.393775, 0.0747287, 
0.783993, -0.875086, 1.06862, 0.340519, -0.352681, 
-0.0830912, -0.100017, 0.0729085, -0.00829403, 0.027489, 
-0.0779597, 0.082286, -0.164181, -0.41519, 0.00282335, 
-0.29573, 0.125571, 0.726935, 0.392137, 0.491348, 
0.0723196, -0.0259758, -0.0636332, -0.452384, -0.000225974, 
-2.34001, 2.45211, -0.544628, 5.62944, -3.44507, 

/* output layer */
-3.13835, 0.994751, 0.444901, 1.59518, 1.23665, 
3.37012, -1.34606, 1.99131, 1.33476, 1.3885, 
1.12559, };

static const int topo[3] = {25, 10, 1};

const MLP net = {
	3,
	topo,
	weights
};

