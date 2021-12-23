import pytube
#from pytube import YouTube 
 
url = 'https://www.youtube.com/watch?v=zpf_R4TU8YY&list=RDzpf_R4TU8YY&start_radio=1'

youtube = pytube.YouTube(url)
video = youtube.streams.first()
# or
video = youtube.streams.get_highest_resolution()
video.download() # In Same Folder
# or
video.download('/Downloads')
 