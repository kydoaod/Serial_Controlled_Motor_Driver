Contents
-----------

* SCMD_FW.cydsn -- Project folder for current version of firmware.
* Releases -- hex files for release
  * SCMD_FID_02.hex -- Internal release, lacks self diagnostics features
  * SCMD_FID_03.hex -- Beta release.  Final release features present.  Now has better failsafe, control of config_pin, bus rate control regs and is tested on all three interface modes.
  * SCMD_FID_04.hex -- Test mode for config pins added, enumeration status added, high speed uart modes added as jumper settings.
  * SCMD_FID_06.hex -- Production release.
  * SCMD_FID_07.hex -- Release for moto:bit compatibility.
  * SCMD_FID_07a.hex -- Production release for moto:bit compatibility.  Fixed enable pin bit (was b2, now is b4).
