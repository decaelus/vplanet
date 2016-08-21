/***************** PROXIMACENBRADIUS.H *********************** 
 *
 * Rodrigo Luger, Summer 2016
 *
*/

#define PROXCENBCOMPLEN		7
#define PROXCENBTIMELEN		50

double fdProximaCenBRadius(double, double);

static double const daProxCenBComp[] = {0.00001, 0.000100100, 0.000200000, 0.000500000, 0.00100000, 0.00200000, 0.00500000, 0.0100000};
static double const daProxCenBAge[] = {1.0000000E+07, 1.1513954E+07, 1.3257114E+07, 1.5264180E+07, 1.7575106E+07, 2.0235896E+07, 2.3299518E+07, 2.6826958E+07, 3.0888436E+07, 3.5564803E+07, 4.0949151E+07, 4.7148664E+07, 5.4286754E+07, 6.2505519E+07, 7.1968567E+07, 8.2864277E+07, 9.5409548E+07, 1.0985411E+08, 1.2648552E+08, 1.4563485E+08, 1.6768329E+08, 1.9306977E+08, 2.2229965E+08, 2.5595479E+08, 2.9470517E+08, 3.3932218E+08, 3.9069399E+08, 4.4984327E+08, 5.1794747E+08, 5.9636233E+08, 6.8664885E+08, 7.9060432E+08, 9.1029818E+08, 1.0481131E+09, 1.2067926E+09, 1.3894955E+09, 1.5998587E+09, 1.8420700E+09, 2.1209509E+09, 2.4420531E+09, 2.8117687E+09, 3.2374575E+09, 3.7275937E+09, 4.2919343E+09, 4.9417134E+09, 5.6898660E+09, 6.5512856E+09, 7.5431201E+09, 8.6851137E+09, 1.0000000E+10};
static double const daProxCenBRadius[PROXCENBCOMPLEN][PROXCENBTIMELEN] =
 {{1.074000, 1.074000, 1.074000, 1.074000, 1.074000, 1.074000, 1.074000, 1.074000, 1.074000, 1.074000, 1.074000, 1.074000, 1.074000, 1.074000, 1.074000, 1.074000, 1.074000, 1.074000, 1.074000, 1.074000, 1.074000, 1.074000, 1.074000, 1.074000, 1.074000, 1.074000, 1.074000, 1.074000, 1.074000, 1.074000, 1.074000, 1.074000, 1.074000, 1.074000, 1.074000, 1.074000, 1.074000, 1.074000, 1.074000, 1.074000, 1.074000, 1.074000, 1.074000, 1.074000, 1.074000, 1.074000, 1.074000, 1.074000, 1.074000, 1.074000},
  {1.463086, 1.417403, 1.459464, 1.454848, 1.449649, 1.399296, 1.433978, 1.413519, 1.417165, 1.428509, 1.402747, 1.384987, 1.403590, 1.375102, 1.385195, 1.374890, 1.362673, 1.323761, 1.306699, 1.277714, 1.252569, 1.230352, 1.220339, 1.221584, 1.222095, 1.222095, 1.222095, 1.222095, 1.222111, 1.223893, 1.223893, 1.223893, 1.224062, 1.225732, 1.225732, 1.227059, 1.227619, 1.229901, 1.231516, 1.232917, 1.235364, 1.238102, 1.241533, 1.247181, 1.253112, 1.258545, 1.259453, 1.260718, 1.262341, 1.264332},
  {1.340164, 1.337498, 1.346076, 1.344281, 1.344740, 1.354108, 1.371647, 1.379671, 1.396774, 1.393320, 1.387313, 1.356807, 1.358361, 1.363181, 1.349616, 1.333890, 1.340613, 1.321234, 1.316514, 1.303926, 1.284028, 1.274702, 1.275090, 1.257792, 1.244128, 1.234062, 1.231587, 1.231587, 1.231600, 1.233385, 1.233385, 1.233385, 1.233553, 1.235224, 1.235224, 1.236552, 1.237112, 1.239395, 1.241010, 1.242411, 1.244860, 1.247598, 1.251031, 1.256684, 1.262615, 1.268051, 1.268973, 1.270258, 1.271907, 1.273931},
  {1.333884, 1.324986, 1.335872, 1.332229, 1.335282, 1.341235, 1.352728, 1.365189, 1.401351, 1.427044, 1.409745, 1.390667, 1.395495, 1.394515, 1.394435, 1.374629, 1.380264, 1.378815, 1.374714, 1.373205, 1.354925, 1.358028, 1.342092, 1.338170, 1.339958, 1.335360, 1.325887, 1.304005, 1.299493, 1.287097, 1.274994, 1.261897, 1.262066, 1.263739, 1.263739, 1.265068, 1.265627, 1.267915, 1.269531, 1.270935, 1.273386, 1.276127, 1.279564, 1.285222, 1.291162, 1.296610, 1.297574, 1.298918, 1.300645, 1.302760},
  {1.413774, 1.411315, 1.410963, 1.410291, 1.410811, 1.412933, 1.422476, 1.434454, 1.455379, 1.467372, 1.454690, 1.446973, 1.456963, 1.452898, 1.448635, 1.453498, 1.458382, 1.449156, 1.465357, 1.436860, 1.454029, 1.448281, 1.437643, 1.445156, 1.431543, 1.429250, 1.414306, 1.408134, 1.407909, 1.402028, 1.386891, 1.373207, 1.359784, 1.347110, 1.336101, 1.326304, 1.313143, 1.315432, 1.317051, 1.318459, 1.320916, 1.323662, 1.327106, 1.332775, 1.338726, 1.344193, 1.345230, 1.346672, 1.348525, 1.350797},
  {1.662329, 1.623717, 1.593079, 1.571521, 1.557122, 1.554048, 1.555934, 1.591067, 1.615452, 1.651527, 1.621438, 1.597991, 1.603272, 1.610057, 1.608260, 1.616519, 1.604277, 1.589421, 1.609819, 1.605975, 1.620978, 1.623501, 1.629322, 1.629510, 1.640833, 1.615868, 1.626902, 1.621330, 1.609979, 1.604379, 1.604895, 1.588252, 1.597051, 1.579589, 1.580114, 1.562533, 1.570851, 1.564879, 1.560128, 1.545140, 1.527490, 1.535571, 1.521252, 1.523939, 1.522123, 1.520980, 1.508153, 1.509398, 1.502326, 1.466334},
  {2.827404, 2.769879, 2.742116, 2.682535, 2.628528, 2.582153, 2.540170, 2.517673, 2.518111, 2.496462, 2.421273, 2.342483, 2.278526, 2.232106, 2.193505, 2.158516, 2.159635, 2.119929, 2.126924, 2.096071, 2.085289, 2.060263, 2.051307, 2.028710, 2.009123, 1.995419, 1.979485, 1.960599, 1.940499, 1.929413, 1.913216, 1.904773, 1.879795, 1.865157, 1.852126, 1.837503, 1.824437, 1.821542, 1.809304, 1.793153, 1.777415, 1.757947, 1.738880, 1.724441, 1.709415, 1.694036, 1.675065, 1.659353, 1.640337, 1.618860}};