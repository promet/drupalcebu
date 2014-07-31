; drupalcebu make file for d.o. usage
core = "7.x"
api = "2"

; +++++ Modules +++++

projects[admin_menu][version] = "3.0-rc4"
projects[admin_menu][subdir] = "contrib"

projects[ctools][version] = "1.4"
projects[ctools][subdir] = "contrib"

projects[context][version] = "3.2"
projects[context][subdir] = "contrib"

projects[devel][version] = "1.5"
projects[devel][subdir] = "contrib"

projects[meetup_api][version] = "1.0-beta2"
projects[meetup_api][subdir] = "contrib"

projects[profiler_builder][version] = "1.1"
projects[profiler_builder][subdir] = "contrib"

projects[entityform][version] = "2.0-beta4"
projects[entityform][subdir] = "contrib"

projects[features][version] = "2.0"
projects[features][subdir] = "contrib"

projects[features_override][version] = "2.0-rc1"
projects[features_override][subdir] = "contrib"

projects[feeds][version] = "2.0-alpha8"
projects[feeds][subdir] = "contrib"

projects[field_permissions][version] = "1.0-beta2"
projects[field_permissions][subdir] = "contrib"

projects[link][version] = "1.2"
projects[link][subdir] = "contrib"

projects[mailchimp][version] = "3.1"
projects[mailchimp][subdir] = "contrib"

projects[blockexport][version] = "1.0"
projects[blockexport][subdir] = "contrib"

projects[entity][version] = "1.5"
projects[entity][subdir] = "contrib"

projects[formblock][version] = "1.0-alpha1"
projects[formblock][subdir] = "contrib"

projects[inline_registration][version] = "1.x-dev"
projects[inline_registration][subdir] = "contrib"

projects[job_scheduler][version] = "2.0-alpha3"
projects[job_scheduler][subdir] = "contrib"

projects[libraries][version] = "2.2"
projects[libraries][subdir] = "contrib"

projects[simplify][version] = "3.1"
projects[simplify][subdir] = "contrib"

projects[strongarm][version] = "2.0"
projects[strongarm][subdir] = "contrib"

projects[ckeditor][version] = "1.15"
projects[ckeditor][subdir] = "contrib"

projects[jquery_update][version] = "2.4"
projects[jquery_update][subdir] = "contrib"

projects[views][version] = "3.8"
projects[views][subdir] = "contrib"

projects[views_pdf][version] = "1.3"
projects[views_pdf][subdir] = "contrib"

; +++++ Themes +++++

; responsive_bartik
projects[responsive_bartik][type] = "theme"
projects[responsive_bartik][version] = "1.0-rc1"
projects[responsive_bartik][subdir] = "contrib"

; +++++ Libraries +++++

; CKEditor
libraries[ckeditor][directory_name] = "ckeditor"
libraries[ckeditor][type] = "library"
libraries[ckeditor][destination] = "libraries"
libraries[ckeditor][download][type] = "get"
libraries[ckeditor][download][url] = "http://download.cksource.com/CKEditor/CKEditor/CKEditor%203.6.6.1/ckeditor_3.6.6.1.tar.gz"

