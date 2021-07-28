const float hanning_1024[] =
{
  0.000009, 0.000038, 0.000085, 0.000150, 0.000235, 0.000338, 0.000460, 0.000601, 0.000761, 0.000939, 0.001136, 0.001352, 0.001587, 0.001840, 0.002112, 0.002403,
  0.002712, 0.003041, 0.003387, 0.003753, 0.004137, 0.004540, 0.004961, 0.005401, 0.005860, 0.006337, 0.006833, 0.007347, 0.007880, 0.008431, 0.009001, 0.009589,
  0.010195, 0.010820, 0.011464, 0.012125, 0.012805, 0.013504, 0.014220, 0.014955, 0.015708, 0.016480, 0.017269, 0.018077, 0.018903, 0.019746, 0.020608, 0.021488,
  0.022386, 0.023302, 0.024236, 0.025187, 0.026157, 0.027144, 0.028149, 0.029172, 0.030212, 0.031270, 0.032346, 0.033439, 0.034550, 0.035678, 0.036824, 0.037987,
  0.039167, 0.040365, 0.041580, 0.042813, 0.044062, 0.045329, 0.046613, 0.047913, 0.049231, 0.050566, 0.051917, 0.053286, 0.054671, 0.056073, 0.057491, 0.058927,
  0.060378, 0.061847, 0.063331, 0.064833, 0.066350, 0.067884, 0.069434, 0.071000, 0.072583, 0.074181, 0.075796, 0.077426, 0.079072, 0.080734, 0.082412, 0.084106,
  0.085815, 0.087539, 0.089280, 0.091035, 0.092806, 0.094593, 0.096394, 0.098211, 0.100043, 0.101890, 0.103751, 0.105628, 0.107519, 0.109426, 0.111347, 0.113282,
  0.115232, 0.117197, 0.119176, 0.121169, 0.123176, 0.125198, 0.127234, 0.129283, 0.131347, 0.133424, 0.135516, 0.137621, 0.139739, 0.141871, 0.144017, 0.146176,
  0.148348, 0.150533, 0.152732, 0.154944, 0.157168, 0.159406, 0.161656, 0.163919, 0.166195, 0.168483, 0.170783, 0.173096, 0.175422, 0.177759, 0.180109, 0.182470,
  0.184844, 0.187229, 0.189626, 0.192035, 0.194455, 0.196887, 0.199331, 0.201785, 0.204251, 0.206728, 0.209215, 0.211714, 0.214224, 0.216744, 0.219275, 0.221817,
  0.224369, 0.226931, 0.229504, 0.232087, 0.234679, 0.237282, 0.239895, 0.242517, 0.245150, 0.247791, 0.250443, 0.253103, 0.255773, 0.258452, 0.261140, 0.263837,
  0.266543, 0.269258, 0.271981, 0.274713, 0.277454, 0.280202, 0.282960, 0.285725, 0.288498, 0.291279, 0.294068, 0.296865, 0.299669, 0.302481, 0.305301, 0.308127,
  0.310961, 0.313802, 0.316650, 0.319505, 0.322367, 0.325235, 0.328110, 0.330992, 0.333879, 0.336773, 0.339673, 0.342579, 0.345492, 0.348409, 0.351333, 0.354262,
  0.357197, 0.360137, 0.363082, 0.366032, 0.368988, 0.371948, 0.374913, 0.377883, 0.380857, 0.383836, 0.386819, 0.389807, 0.392799, 0.395794, 0.398794, 0.401797,
  0.404804, 0.407815, 0.410829, 0.413847, 0.416867, 0.419891, 0.422918, 0.425948, 0.428980, 0.432016, 0.435053, 0.438094, 0.441136, 0.444181, 0.447228, 0.450277,
  0.453327, 0.456380, 0.459434, 0.462489, 0.465546, 0.468605, 0.471664, 0.474725, 0.477786, 0.480849, 0.483912, 0.486975, 0.490040, 0.493104, 0.496169, 0.499234,
  0.502299, 0.505364, 0.508428, 0.511493, 0.514557, 0.517620, 0.520683, 0.523745, 0.526806, 0.529866, 0.532925, 0.535982, 0.539039, 0.542093, 0.545147, 0.548198,
  0.551248, 0.554296, 0.557342, 0.560385, 0.563427, 0.566466, 0.569502, 0.572536, 0.575567, 0.578596, 0.581621, 0.584643, 0.587662, 0.590678, 0.593691, 0.596700,
  0.599705, 0.602706, 0.605704, 0.608698, 0.611687, 0.614673, 0.617654, 0.620630, 0.623603, 0.626570, 0.629533, 0.632491, 0.635444, 0.638391, 0.641334, 0.644271,
  0.647203, 0.650130, 0.653050, 0.655965, 0.658874, 0.661777, 0.664675, 0.667565, 0.670450, 0.673328, 0.676200, 0.679065, 0.681923, 0.684774, 0.687619, 0.690456,
  0.693287, 0.696110, 0.698925, 0.701734, 0.704534, 0.707327, 0.710112, 0.712890, 0.715659, 0.718420, 0.721173, 0.723918, 0.726654, 0.729382, 0.732101, 0.734811,
  0.737512, 0.740205, 0.742889, 0.745563, 0.748228, 0.750884, 0.753531, 0.756168, 0.758795, 0.761413, 0.764020, 0.766618, 0.769206, 0.771784, 0.774351, 0.776908,
  0.779455, 0.781992, 0.784517, 0.787032, 0.789536, 0.792030, 0.794512, 0.796983, 0.799444, 0.801893, 0.804330, 0.806756, 0.809171, 0.811574, 0.813965, 0.816344,
  0.818712, 0.821068, 0.823411, 0.825743, 0.828062, 0.830368, 0.832663, 0.834945, 0.837214, 0.839471, 0.841715, 0.843946, 0.846164, 0.848369, 0.850561, 0.852740,
  0.854905, 0.857058, 0.859196, 0.861322, 0.863434, 0.865532, 0.867616, 0.869687, 0.871743, 0.873786, 0.875815, 0.877829, 0.879830, 0.881816, 0.883787, 0.885745,
  0.887687, 0.889616, 0.891529, 0.893428, 0.895312, 0.897181, 0.899036, 0.900875, 0.902699, 0.904508, 0.906302, 0.908081, 0.909844, 0.911592, 0.913325, 0.915042,
  0.916743, 0.918429, 0.920099, 0.921753, 0.923391, 0.925014, 0.926620, 0.928210, 0.929785, 0.931343, 0.932885, 0.934411, 0.935920, 0.937413, 0.938890, 0.940350,
  0.941793, 0.943220, 0.944630, 0.946024, 0.947401, 0.948761, 0.950104, 0.951430, 0.952739, 0.954031, 0.955307, 0.956565, 0.957806, 0.959029, 0.960236, 0.961425,
  0.962597, 0.963751, 0.964888, 0.966008, 0.967110, 0.968194, 0.969261, 0.970310, 0.971342, 0.972356, 0.973352, 0.974330, 0.975291, 0.976234, 0.977158, 0.978065,
  0.978954, 0.979825, 0.980678, 0.981513, 0.982329, 0.983128, 0.983908, 0.984670, 0.985414, 0.986140, 0.986848, 0.987537, 0.988208, 0.988860, 0.989495, 0.990110,
  0.990708, 0.991287, 0.991847, 0.992389, 0.992913, 0.993418, 0.993904, 0.994372, 0.994821, 0.995252, 0.995664, 0.996057, 0.996432, 0.996788, 0.997126, 0.997445,
  0.997745, 0.998026, 0.998289, 0.998533, 0.998758, 0.998965, 0.999152, 0.999321, 0.999472, 0.999603, 0.999716, 0.999810, 0.999885, 0.999941, 0.999979, 0.999998,
  0.999998, 0.999979, 0.999941, 0.999885, 0.999810, 0.999716, 0.999603, 0.999472, 0.999321, 0.999152, 0.998965, 0.998758, 0.998533, 0.998289, 0.998026, 0.997745,
  0.997445, 0.997126, 0.996788, 0.996432, 0.996057, 0.995664, 0.995252, 0.994821, 0.994372, 0.993904, 0.993418, 0.992913, 0.992389, 0.991847, 0.991287, 0.990708,
  0.990110, 0.989495, 0.988860, 0.988208, 0.987537, 0.986848, 0.986140, 0.985414, 0.984670, 0.983908, 0.983128, 0.982329, 0.981513, 0.980678, 0.979825, 0.978954,
  0.978065, 0.977158, 0.976234, 0.975291, 0.974330, 0.973352, 0.972356, 0.971342, 0.970310, 0.969261, 0.968194, 0.967110, 0.966008, 0.964888, 0.963751, 0.962597,
  0.961425, 0.960236, 0.959029, 0.957806, 0.956565, 0.955307, 0.954031, 0.952739, 0.951430, 0.950104, 0.948761, 0.947401, 0.946024, 0.944630, 0.943220, 0.941793,
  0.940350, 0.938890, 0.937413, 0.935920, 0.934411, 0.932885, 0.931343, 0.929785, 0.928210, 0.926620, 0.925014, 0.923391, 0.921753, 0.920099, 0.918429, 0.916743,
  0.915042, 0.913325, 0.911592, 0.909844, 0.908081, 0.906302, 0.904508, 0.902699, 0.900875, 0.899036, 0.897181, 0.895312, 0.893428, 0.891529, 0.889616, 0.887687,
  0.885745, 0.883787, 0.881816, 0.879830, 0.877829, 0.875815, 0.873786, 0.871743, 0.869687, 0.867616, 0.865532, 0.863434, 0.861322, 0.859196, 0.857058, 0.854905,
  0.852740, 0.850561, 0.848369, 0.846164, 0.843946, 0.841715, 0.839471, 0.837214, 0.834945, 0.832663, 0.830368, 0.828062, 0.825743, 0.823411, 0.821068, 0.818712,
  0.816344, 0.813965, 0.811574, 0.809171, 0.806756, 0.804330, 0.801893, 0.799444, 0.796983, 0.794512, 0.792030, 0.789536, 0.787032, 0.784517, 0.781992, 0.779455,
  0.776908, 0.774351, 0.771784, 0.769206, 0.766618, 0.764020, 0.761413, 0.758795, 0.756168, 0.753531, 0.750884, 0.748228, 0.745563, 0.742889, 0.740205, 0.737512,
  0.734811, 0.732101, 0.729382, 0.726654, 0.723918, 0.721173, 0.718420, 0.715659, 0.712890, 0.710112, 0.707327, 0.704534, 0.701734, 0.698925, 0.696110, 0.693287,
  0.690456, 0.687619, 0.684774, 0.681923, 0.679065, 0.676200, 0.673328, 0.670450, 0.667565, 0.664675, 0.661777, 0.658874, 0.655965, 0.653050, 0.650130, 0.647203,
  0.644271, 0.641334, 0.638391, 0.635444, 0.632491, 0.629533, 0.626570, 0.623603, 0.620630, 0.617654, 0.614673, 0.611687, 0.608698, 0.605704, 0.602706, 0.599705,
  0.596700, 0.593691, 0.590678, 0.587662, 0.584643, 0.581621, 0.578596, 0.575567, 0.572536, 0.569502, 0.566466, 0.563427, 0.560385, 0.557342, 0.554296, 0.551248,
  0.548198, 0.545147, 0.542093, 0.539039, 0.535982, 0.532925, 0.529866, 0.526806, 0.523745, 0.520683, 0.517620, 0.514557, 0.511493, 0.508428, 0.505364, 0.502299,
  0.499234, 0.496169, 0.493104, 0.490040, 0.486975, 0.483912, 0.480849, 0.477786, 0.474725, 0.471664, 0.468605, 0.465546, 0.462489, 0.459434, 0.456380, 0.453327,
  0.450277, 0.447228, 0.444181, 0.441136, 0.438094, 0.435053, 0.432016, 0.428980, 0.425948, 0.422918, 0.419891, 0.416867, 0.413847, 0.410829, 0.407815, 0.404804,
  0.401797, 0.398794, 0.395794, 0.392799, 0.389807, 0.386819, 0.383836, 0.380857, 0.377883, 0.374913, 0.371948, 0.368988, 0.366032, 0.363082, 0.360137, 0.357197,
  0.354262, 0.351333, 0.348409, 0.345492, 0.342579, 0.339673, 0.336773, 0.333879, 0.330992, 0.328110, 0.325235, 0.322367, 0.319505, 0.316650, 0.313802, 0.310961,
  0.308127, 0.305301, 0.302481, 0.299669, 0.296865, 0.294068, 0.291279, 0.288498, 0.285725, 0.282960, 0.280202, 0.277454, 0.274713, 0.271981, 0.269258, 0.266543,
  0.263837, 0.261140, 0.258452, 0.255773, 0.253103, 0.250443, 0.247791, 0.245150, 0.242517, 0.239895, 0.237282, 0.234679, 0.232087, 0.229504, 0.226931, 0.224369,
  0.221817, 0.219275, 0.216744, 0.214224, 0.211714, 0.209215, 0.206728, 0.204251, 0.201785, 0.199331, 0.196887, 0.194455, 0.192035, 0.189626, 0.187229, 0.184844,
  0.182470, 0.180109, 0.177759, 0.175422, 0.173096, 0.170783, 0.168483, 0.166195, 0.163919, 0.161656, 0.159406, 0.157168, 0.154944, 0.152732, 0.150533, 0.148348,
  0.146176, 0.144017, 0.141871, 0.139739, 0.137621, 0.135516, 0.133424, 0.131347, 0.129283, 0.127234, 0.125198, 0.123176, 0.121169, 0.119176, 0.117197, 0.115232,
  0.113282, 0.111347, 0.109426, 0.107519, 0.105628, 0.103751, 0.101890, 0.100043, 0.098211, 0.096394, 0.094593, 0.092806, 0.091035, 0.089280, 0.087539, 0.085815,
  0.084106, 0.082412, 0.080734, 0.079072, 0.077426, 0.075796, 0.074181, 0.072583, 0.071000, 0.069434, 0.067884, 0.066350, 0.064833, 0.063331, 0.061847, 0.060378,
  0.058927, 0.057491, 0.056073, 0.054671, 0.053286, 0.051917, 0.050566, 0.049231, 0.047913, 0.046613, 0.045329, 0.044062, 0.042813, 0.041580, 0.040365, 0.039167,
  0.037987, 0.036824, 0.035678, 0.034550, 0.033439, 0.032346, 0.031270, 0.030212, 0.029172, 0.028149, 0.027144, 0.026157, 0.025187, 0.024236, 0.023302, 0.022386,
  0.021488, 0.020608, 0.019746, 0.018903, 0.018077, 0.017269, 0.016480, 0.015708, 0.014955, 0.014220, 0.013504, 0.012805, 0.012125, 0.011464, 0.010820, 0.010195,
  0.009589, 0.009001, 0.008431, 0.007880, 0.007347, 0.006833, 0.006337, 0.005860, 0.005401, 0.004961, 0.004540, 0.004137, 0.003753, 0.003387, 0.003041, 0.002712,
  0.002403, 0.002112, 0.001840, 0.001587, 0.001352, 0.001136, 0.000939, 0.000761, 0.000601, 0.000460, 0.000338, 0.000235, 0.000150, 0.000085, 0.000038, 0.000009,
};
