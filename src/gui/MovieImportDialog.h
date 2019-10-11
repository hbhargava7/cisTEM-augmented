#ifndef __MyMovieImportDialog__
#define __MyMovieImportDialog__

/**
@file
Subclass of MovieImportDialog, which is generated by wxFormBuilder.
*/


//// end generated include

/** Implementing MovieImportDialog */
class MyMovieImportDialog : public MovieImportDialog
{
	public:
		/** Constructor */
		MyMovieImportDialog( wxWindow* parent );
	//// end generated class members
	
		void AddFilesClick( wxCommandEvent& event );
		void ClearClick( wxCommandEvent& event );
		void CancelClick( wxCommandEvent& event );
		void AddDirectoryClick( wxCommandEvent& event );
		void ImportClick( wxCommandEvent& event );
		void OnTextKeyPress( wxKeyEvent& event );
		void CheckImportButtonStatus();
		void TextChanged( wxCommandEvent& event);

		void OnMoviesAreGainCorrectedCheckBox( wxCommandEvent & event );
		void OnCorrectMagDistortionCheckBox( wxCommandEvent & event );
		void OnGainFilePickerChanged( wxFileDirPickerEvent & event );
		void OnResampleMoviesCheckBox( wxCommandEvent & event );
};


#endif // __MyMovieImportDialog__
