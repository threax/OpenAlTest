# Investigation Into std::cyl_bessel_i Failures on Steam Deck
This repo shows issues related to using `std::cyl_bessel_i` on a Steam Deck. It seems like this is due to an issue with this function not existing in Wine.

There are 2 sample projects in this repo. One tests OpenALSoft, where the issue was originally found. The other tests `std::cyl_bessel_i` by itself in a console app.

All tests are running on `proton-9.0-2e`.

## StdCylBesselTest
This is the more interesting project, since it gets right to the core of the issue. If you call `std::cyl_bessel_i` in a program or libray it will fail to load on the Steam Deck under Wine with the following error message: `wine: Call from XXXXX to unimplemented function msvcp140_2.dll.__std_smf_cyl+bessel_i, aborting.`

## OpenAlTestConsole
This is the test project for OpenALSoft. You will need the submodules to build this one. Once you clone the submodules run AutoBuild_x64 from a VS Command Prompt to build the OpenALSoft library. You can then load the OpenAlTestConsole project and test the versions from there. Ultimately though the issue is the same. Using `std::cyl_bessel_i` causes the OpenALSoft library to be unable to load, which causes the main exectuable to fail. This repo is pinned to the version of openal-soft before it was fixed by removing this call.