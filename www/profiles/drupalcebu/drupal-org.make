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

projects[meetup_api][version] = "1.0-beta2"
projects[meetup_api][subdir] = "contrib"

projects[profiler_builder][version] = "1.1"
projects[profiler_builder][subdir] = "contrib"

projects[drupalcebu_google_analytics_settings][version] = "1.0"
projects[drupalcebu_google_analytics_settings][subdir] = "contrib"

projects[drupalcebu_inline_registration_settings][version] = "1.0"
projects[drupalcebu_inline_registration_settings][subdir] = "contrib"

projects[drupalcebu_mail_chimp][version] = "1.0"
projects[drupalcebu_mail_chimp][subdir] = "contrib"

projects[drupalcebu_meetup_api][version] = "1.0"
projects[drupalcebu_meetup_api][subdir] = "contrib"

projects[drupalcebu_recaptcha_settings][version] = "1.0"
projects[drupalcebu_recaptcha_settings][subdir] = "contrib"

projects[drupalcebu_site_info_config][version] = "1.0"
projects[drupalcebu_site_info_config][subdir] = "contrib"

projects[drupalcebu_sitewide_block_settings][version] = "1.0"
projects[drupalcebu_sitewide_block_settings][subdir] = "contrib"

projects[drupalcebu_sitewide_permissions][version] = "1.0"
projects[drupalcebu_sitewide_permissions][subdir] = "contrib"

projects[drupalcebu_text_format_settings][version] = "1.0"
projects[drupalcebu_text_format_settings][subdir] = "contrib"

projects[drupalcebu_user_profile][version] = "1.0"
projects[drupalcebu_user_profile][subdir] = "contrib"

projects[drupalcebu_blog][version] = "1.0"
projects[drupalcebu_blog][subdir] = "contrib"

projects[drupalcebu_logo_contents_content_type][version] = "1.0"
projects[drupalcebu_logo_contents_content_type][subdir] = "contrib"

projects[drupalcebu_resource][version] = "1.0"
projects[drupalcebu_resource][subdir] = "contrib"

projects[drupalcebu_logo_contest_context][version] = "1.0"
projects[drupalcebu_logo_contest_context][subdir] = "contrib"

projects[drupalcebu_sitewide_context][version] = "1.0"
projects[drupalcebu_sitewide_context][subdir] = "contrib"

projects[drupalcebu_feed_user_import][version] = "1.0"
projects[drupalcebu_feed_user_import][subdir] = "contrib"

projects[drupalcebu_main_menu][version] = "1.0"
projects[drupalcebu_main_menu][subdir] = "contrib"

projects[drupalcebu_blog_view][version] = "1.0"
projects[drupalcebu_blog_view][subdir] = "contrib"

projects[drupalcebu_certificate_pdf_view][version] = "1.0"
projects[drupalcebu_certificate_pdf_view][subdir] = "contrib"

projects[drupalcebu_resources_view][version] = "1.0"
projects[drupalcebu_resources_view][subdir] = "contrib"

projects[drupalcebu_submissions_view][version] = "1.0"
projects[drupalcebu_submissions_view][subdir] = "contrib"

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

projects[strongarm][version] = "2.0"
projects[strongarm][subdir] = "contrib"

projects[captcha][version] = "1.1"
projects[captcha][subdir] = "contrib"

projects[recaptcha][version] = "1.11"
projects[recaptcha][subdir] = "contrib"

projects[google_analytics][version] = "2.0"
projects[google_analytics][subdir] = "contrib"

projects[ckeditor][version] = "1.15"
projects[ckeditor][subdir] = "contrib"

projects[jquery_update][version] = "2.4"
projects[jquery_update][subdir] = "contrib"

projects[simplify][version] = "3.1"
projects[simplify][subdir] = "contrib"

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

