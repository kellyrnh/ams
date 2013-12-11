
Description
===========
The Webform Protected Downloads module provides a handy solution for the
following situation:
- you want to offer some files for download to either anonymous or registered
  users
- you don't want those files to be plublicly accessible
- you want the user to fill in some form fields before getting access to the
  files
- you want to be sure that the user gives a valid email address

Functional overview
===========
This module provides protected downloads using webforms. When you create a
webform you can select which of the attached files you want to protect. You
need to specify the webform field used for the confirmation mail (this must be
a mandatory email field) and how long the download should be accessible after
the user has submitted the form.
When a user submits a webform with protected files he will be sent an email
with a link to the downloads page. The link contains an individual hash code that
will be checked upon page load to verify the access. If verification fails
access will be denied. If it succeeds the user will see a configurable text
above the default private upload file listing.

Installation
===========
Webform Protected Downloads relies on the Webform module, the Private Uploads
module and the Token module, which must be downloaded and enabled separately.
It works only with files uploaded using the core upload module, so this must be
enabled as well.

1. Unpack the Webform Protected Downloads folder and contents in the
   appropriate modules directory of your Drupal installation. This is probably
   sites/all/modules/
2. Enable the Webform Protected Downloads module in the administration section
   of your site: admin/build/modules
3. If you're not using Drupal's default administrative account, make sure
   "administer webform protected downloads" is enabled on the user permissions
   page.
4. Make sure that all roles that you want to allow file access to have the
  "view uploaded files" permission enabled.
   See http://drupal.org/documentation/modules/upload for more information
   on how to work with files in drupal.

Usage
===========
When you create a webform with files attached, you will see a new tab in the
edit section after the node has been saved. Using this tab "Protected
Downloads" you can configure which files to protect, the content of the email
that will be sent to the user, the validity period of the download link and the
messages for access granting or denial.

In order to preview the resulting downloads page (you must be logged in as a
user with the "administer webform protected downloads" permission) you can
visit a url like:
http://PATH-TO-YOUR-INSTALLATION/node/NID/download
If you want to see what the access denied page looks like simply visit the same
url as an anonymous user.